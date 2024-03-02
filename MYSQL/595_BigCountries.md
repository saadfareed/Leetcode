# 595.Big Countries
* **Topic** --> **_SQL Schema_** 
---
## Task Introduction 
* Name is the primary ey column for the below table. Each row of this table gives information about the name of a country, the continent to which it blongs, its area, the population, and its GDP value. 

```sh
Table Name: World 
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| name        | varchar |
| continent   | varchar |
| area        | int     |
| population  | int     |
| gdp         | bigint  |
+-------------+---------+
```

* A country is **_big_** if:
  * it has an area of at least three million (i.e 300000 km^2), or
  * it has a population of at least twenty-five million (i.e. 25000000).
#### **_To Do 1_**: Write an SQL query to report the name, population, and area of the **big countries**.
#### **_To Do 2_**: Return the result table in **any order**.
#### **_To Do 3_**: Return the result table in **any order**.
##### **Example 1**
```sh
Input: 
World table:
+-------------+-----------+---------+------------+--------------+
| name        | continent | area    | population | gdp          |
+-------------+-----------+---------+------------+--------------+
| Afghanistan | Asia      | 652230  | 25500100   | 20343000000  |
| Albania     | Europe    | 28748   | 2831741    | 12960000000  |
| Algeria     | Africa    | 2381741 | 37100000   | 188681000000 |
| Andorra     | Europe    | 468     | 78115      | 3712000000   |
| Angola      | Africa    | 1246700 | 20609294   | 100990000000 |
+-------------+-----------+---------+------------+--------------+
Output: 
+-------------+------------+---------+
| name        | population | area    |
+-------------+------------+---------+
| Afghanistan | 25500100   | 652230  |
| Algeria     | 37100000   | 2381741 |
+-------------+------------+---------+
```
--- 
## Solution
```SQL
SELECT name, population,area
FROM World 
WHERE area >= 3000000
OR population >= 25000000
```

```sh
Output: 
| name        | population | area    |
| ----------- | ---------- | ------- |
| Afghanistan | 25500100   | 652230  |
| Algeria     | 37100000   | 2381741 |

Expected: 
| name        | population | area    |
| ----------- | ---------- | ------- |
| Afghanistan | 25500100   | 652230  |
| Algeria     | 37100000   | 2381741 |
```
