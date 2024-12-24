/* Write your PL/SQL query statement below */
SELECT
    e.name name,
    b.bonus bonus
FROM
    Employee e
LEFT JOIN Bonus b ON e.empId = b.empId
WHERE b.bonus IS null OR b.bonus < 1000;