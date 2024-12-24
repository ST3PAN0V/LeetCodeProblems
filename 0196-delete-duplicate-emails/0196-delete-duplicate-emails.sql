DELETE FROM
    Person pmain
WHERE
    pmain.id NOT IN (SELECT MIN(p1.id) FROM Person p1 GROUP BY p1.email)