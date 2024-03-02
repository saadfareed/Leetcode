SELECT product_id -- to find the ids of products that are both low fat and recyclable
FROM Products 
WHERE low_fats = 'Y'
AND recyclable = 'Y'