# select sell_date,count(product) as num_sold, product 
#  GROUP_CONCAT(product ORDER BY product ASC) AS products 
#  FROM Activities
# GROUP BY sell_date;


# SELECT 
#     sell_date,
#     COUNT(product) AS num_sold,
#     GROUP_CONCAT(product ORDER BY product ASC) AS products
# FROM Activities
# GROUP BY sell_date;

WITH UniqueProducts AS (
  SELECT DISTINCT sell_date, product
  FROM Activities
)

SELECT 
    sell_date,
    COUNT(product) AS num_sold,
    GROUP_CONCAT(product ORDER BY product ASC) AS products
FROM UniqueProducts
GROUP BY sell_date;


