// Sending messages, a simple POST
function PublishForm(form, url) {
    function sendMessage(message) {
        fetch(url, {
            method: 'POST',
            body: message
        });
    }

    form.onsubmit = function() {
        const message = form.message.value;
        if (message) {
            form.message.value = '';
            sendMessage(message);
        }
        return false;
    }
}

// Receiving messages with long polling
function SubscribePane(elem, url) {
    function showMessage(message) {
        const messageElem = document.createElement('div');
        messageElem.append(message);
        elem.append(messageElem);
    }

    async function subscribe() {
        const response = await fetch(url);
        const {status} = response;

        if (status == 502) {
            // Connection timeout
            // happens when the connection was pending for too long
            // let's reconnect
            await subscribe();
        } else if (status != 200) { 
            // Show Error
            showMessage(response.statusText);
            
            // Reconnect in one second
            await sleep();
            await subscribe();
        } else {
            // Got message
            const message = await response.text();
            showMessage(message);
            await subscribe();
        }
    } 

    subscribe();
}

function sleep(time=1000) { 
    return new Promise((resolve, reject) => setTimeout(resolve, time));
}