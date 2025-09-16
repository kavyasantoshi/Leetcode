CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      with cte as
      (select id,salary,
       DENSE_RANK() OVER(order by salary DESC) as rn
       FROM Employee)
     select salary from cte
     where rn = N
     limit 1
  );
END