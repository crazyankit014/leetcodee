# Write your MySQL query statement below
# select p.product_name, s.year,s.price 
# from Product as p inner join Sales as s on 
# s.product_id=p.product_id;


# Write your MySQL query statement below
select product.product_name,sales.year,sales.price 
from sales,product 
where sales.product_id=product.product_id;