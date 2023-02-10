-- Write an SQL query to find username and count of invoices from user and invoice table.

-- Return the result table in any order.
--  Write your MySQL query statement below
-- create a table
CREATE TABLE user (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  gender TEXT NOT NULL
);

CREATE TABLE invoice (
  id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  total INTEGER NOT NULL,
  user_id INTEGER,
 FOREIGN KEY (user_id) REFERENCES user(id)
);
-- insert some values
INSERT INTO user VALUES (1, 'Ryan', 'M');
INSERT INTO user VALUES (2, 'Joanna', 'F');
INSERT INTO user VALUES (3, 'Saul', 'M');
INSERT INTO user VALUES (4, 'Norma', 'F');

INSERT INTO invoice VALUES (1, 'backery', 99,1);
INSERT INTO invoice VALUES (2, 'meat', 88,1);
INSERT INTO invoice VALUES (3, 'candy', 77,3);
INSERT INTO invoice VALUES (4, 'soaps', 66,4);
INSERT INTO invoice VALUES (5, 'meat', 55,2);
INSERT INTO invoice VALUES (6, 'candy', 44,2);
INSERT INTO invoice VALUES (7, 'soaps', 33,2);
-- fetch some values
SELECT user.name , COUNT(*) as count
FROM user 
INNER JOIN invoice ON user.id = invoice.user_id
GROUP BY user.id
HAVING COUNT(*) > 1;