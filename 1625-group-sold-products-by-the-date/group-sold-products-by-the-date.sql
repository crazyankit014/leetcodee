# select sell_date,count(product) as num_sold, product 
#  GROUP_CONCAT(product ORDER BY product ASC) AS products 
#  FROM Activities
# GROUP BY sell_date;


SELECT 
    sell_date,
    COUNT( distinct product) AS num_sold,
    GROUP_CONCAT( distinct product ORDER BY product  separator ',') AS products
FROM Activities
Group BY sell_date;




