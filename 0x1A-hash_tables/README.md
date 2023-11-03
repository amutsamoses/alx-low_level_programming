0x1A. C - Hash tables

A hash function is any function that can be used to map data of arbitrary size to fixed-size values, though there are some hash functions that support variable length output.[1] The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are usually used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.

Hash functions and their associated hash tables are used in data storage and retrieval applications to access data in a small and nearly constant time per retrieval. They require an amount of storage space only fractionally greater than the total space required for the data or records themselves. Hashing is a computationally and storage space-efficient form of data access that avoids the non-constant access time of ordered and unordered lists and structured trees, and the often exponential storage requirements of direct access of state spaces of large or variable-length keys.

Use of hash functions relies on statistical properties of key and function interaction: worst-case behaviour is intolerably bad but rare, and average-case behaviour can be nearly optimal (minimal collision).[2]: 527 

Hash functions are related to (and often confused with) checksums, check digits, fingerprints, lossy compression, randomization functions, error-correcting codes, and ciphers. Although the concepts overlap to some extent, each one has its own uses and requirements and is designed and optimized differently. The hash function differs from these concepts mainly in terms of data integrity.

Hash tables
Hash functions are used in conjunction with hash tables to store and retrieve data items or data records. The hash function translates the key associated with each datum or record into a hash code, which is used to index the hash table. When an item is to be added to the table, the hash code may index an empty slot (also called a bucket), in which case the item is added to the table there. If the hash code indexes a full slot, some kind of collision resolution is required: the new item may be omitted (not added to the table), or replace the old item, or it can be added to the table in some other location by a specified procedure. That procedure depends on the structure of the hash table: In chained hashing, each slot is the head of a linked list or chain, and items that collide at the slot are added to the chain. Chains may be kept in random order and searched linearly, or in serial order, or as a self-ordering list by frequency to speed up access. In open address hashing, the table is probed starting from the occupied slot in a specified manner, usually by linear probing, quadratic probing, or double hashing until an open slot is located or the entire table is probed (overflow). Searching for the item follows the same procedure until the item is located, an open slot is found or the entire table has been searched (item not in table).

Specialized uses
Hash functions are also used to build caches for large data sets stored in slow media. A cache is generally simpler than a hashed search table since any collision can be resolved by discarding or writing back the older of the two colliding items.[3]

Hash functions are an essential ingredient of the Bloom filter, a space-efficient probabilistic data structure that is used to test whether an element is a member of a set.

A special case of hashing is known as geometric hashing or the grid method. In these applications, the set of all inputs is some sort of metric space, and the hashing function can be interpreted as a partition of that space into a grid of cells. The table is often an array with two or more indices (called a grid file, grid index, bucket grid, and similar names), and the hash function returns an index tuple. This principle is widely used in computer graphics, computational geometry and many other disciplines, to solve many proximity problems in the plane or in three-dimensional space, such as finding closest pairs in a set of points, similar shapes in a list of shapes, similar images in an image database, and so on.

Hash tables are also used to implement associative arrays and dynamic sets

What is a Hash table?

A hash table or associative array is a popular data structure used in programming. A hash table is just a linked list (I'll get to what a linked list is later on) with a hash function. A hash function basically just takes things and puts them in different "baskets". Each "basket" is just another linked list or something else depending on how you implement it. I'll explain more details on hash tables when I show you how to implement one.

Why would I want to use a hash table rather than an array?

An array is very easy to use and simple to make, but it also has its downsides. For this example, let's say we have a program and in which we want to keep all its users in an array..
