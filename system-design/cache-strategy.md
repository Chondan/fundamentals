# Cache Strategy

## [Things You Should Know About Database Caching](https://bluzelle.com/blog/things-you-should-know-about-database-caching)

Caching is a buffering technique that stores frequently-queried data in a temporary memory. It makes daa easier to be accessed and reduces workloads for databases.

There are serveral benefites using cache:

- Performance: Performance is improved by makding data easier to be accessed through the cache and reduces workloads for database.

- Scalability: Workload of backend query is distributed to the cache system which is lower costs and allow more flexibility in processing of data.

- Availability: If backend database server is unavailable, cache can still provide continuos service to the application, making the system more resilient to failures.

A caching strategy is to determine the relationship between data source and your caching system, and how your data can be accessed. There are various strategies to implement cache but each will have different impacts on your system design and teh resulted performance.

1. Cache Aside

![Cache Aside](https://s3.amazonaws.com/bluzelle-craft-private-storage/2.png?mtime=20190401053314)

In this strategy, the cache is sitting aside the database. The application will first request the data from the cache. If the data exists (we call this a `cache hit`), the app will retrieve the data directly. If not (we call this a `cache miss`), the app will request data from the database and write it to the cache so that the data can be retrieved from the cache again next time.

2. Read Through

![Read Through](https://s3.amazonaws.com/bluzelle-craft-private-storage/3.png?mtime=20190401053315)

Unlike cache aside, the cache sits in between the application and the database. The application only request data from the cache. If a `cache miss` occurs, the cache is responsible to retrieve data from the database, update itself and return data to the application.

3. Write Through

![Write Through](https://s3.amazonaws.com/bluzelle-craft-private-storage/4.png?mtime=20190401053315)

Similar to read through, the cache sits in between. Every writes from the applicatoin must go through the cache to the database.

4. Write Back (a.k.a Write Behind)

![Write Back](https://s3.amazonaws.com/bluzelle-craft-private-storage/5.png?mtime=20190401053317)

It has a similar setpu with write through. The application still writes data to the cache. However, there is a delay in writing from teh cache to the database. The cache only flushes all updated data to the DM once in a while (e.g. every 2 minutes).

5. Write Around

![Write Around](https://s3.amazonaws.com/bluzelle-craft-private-storage/6.png?mtime=20190401053318)

Write around usually combines with either cache aside or read through strategy. The application wirtes directly to the database. Only data that is read goes to the cache.

---

## [All things caching - use caes, benefits, strategies, choosing a caching technology, exploring some popular products](https://medium.datadriveninvestor.com/all-things-caching-use-cases-benefits-strategies-choosing-a-caching-technology-exploring-fa6c1f2e93aa)

---
