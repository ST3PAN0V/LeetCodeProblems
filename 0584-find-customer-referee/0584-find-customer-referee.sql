/* Write your PL/SQL query statement below */
SELECT c.name FROM Customer c WHERE c.referee_id != 2 OR c.referee_id is null