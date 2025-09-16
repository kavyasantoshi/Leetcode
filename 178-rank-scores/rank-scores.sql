# Write your MySQL query statement below
with cte as
(SELECT id,score,
      DENSE_RANK() over(order by score DESC) as score_rank
from Scores)
select score,(score_rank) as "rank" from cte;
