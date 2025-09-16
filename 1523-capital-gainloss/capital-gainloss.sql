# Write your MySQL query statement below
with cte1 as
(select stock_name,operation,sum(price) as high from Stocks
  where operation = "Buy"
  group by stock_name
),
cte2 as
(select stock_name,operation,sum(price)as low from Stocks
  where operation = "Sell"
  group by stock_name
)
select cte1.stock_name,(low-high) as capital_gain_loss from cte1
join cte2 on cte1.stock_name=cte2.stock_name
order by capital_gain_loss desc