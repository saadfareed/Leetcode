# 1757. Recyclable and Low Fat Products
* **Topic** --> **_SQL Schema_** 
* Has been asked in **Facebook** interviews **4** times. 
---
## Task Introduction 
* **_product_id_** is the primary key for this table. low_fats is an ENUM of type ('Y', 'N') where 'Y' means this product is low fat and 'N' means it is not. **_recyclable_** is an ENUM of types ('Y', 'N') where 'Y' means this product is recyclable and 'N' means it is not. 

```sh
Table Name: Products 
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| product_id  | int     |
| low_fats    | enum    |
| recyclable  | enum    |
+-------------+---------+
```

#### **_To Do 1_**: Write an SQL query to find the ids of products that are both low fat and recyclable.
#### **_To Do 2_**: Return the result table in **any order**.
#### **_To Do 3_**: The query result format is in the following example.

##### **Example 1**
```sh
Input: 
Products table:
+-------------+----------+------------+
| product_id  | low_fats | recyclable |
+-------------+----------+------------+
| 0           | Y        | N          |
| 1           | Y        | Y          |
| 2           | N        | Y          |
| 3           | Y        | Y          |
| 4           | N        | N          |
+-------------+----------+------------+
Output: 
+-------------+
| product_id  |
+-------------+
| 1           |
| 3           |
+-------------+
Explanation: Only products 1 and 3 are both low fat and recyclable.
```
---
## Solution
```SQL
SELECT product_id -- to find the ids of products that are both low fat and recyclable
FROM Products 
WHERE low_fats = 'Y'
AND recyclable = 'Y'
```

```sh 
Input: Products =
+------------+----------+------------+
| product_id | low_fats | recyclable |
| ---------- | -------- | ---------- |
| 0          | Y        | N          |
| 1          | Y        | Y          |
| 2          | N        | Y          |
| 3          | Y        | Y          |
| 4          | N        | N          |
+------------+----------+------------+

Expected: 
+------------+
| product_id |
| ---------- |
| 1          |
| 3          |
+------------+
```