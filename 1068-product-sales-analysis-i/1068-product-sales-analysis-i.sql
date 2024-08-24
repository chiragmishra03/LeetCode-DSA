# Write your MySQL query statement below
select Product.product_name , Sales.year , Sales.price from sales inner join product on sales.product_id = product.product_id;