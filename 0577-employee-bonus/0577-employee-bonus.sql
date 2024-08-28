# Write your MySQL query statement below
SELECT name,bonus
FROM Employee
LEFT JOIN Bonus
ON Employee.empId = Bonus.empId
where Bonus.bonus<1000 or Bonus.bonus IS NULL;
