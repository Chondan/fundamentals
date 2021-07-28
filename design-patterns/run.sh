packageName="pkg"
mainApplicationName="App.java"

find "./$pkg/" -name "*.java" -exec javac -d classes {} \;
java -cp classes/ $mainApplicationName;