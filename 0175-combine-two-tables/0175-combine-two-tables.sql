select FirstName,LastName,City,State
from Person p
left join Address a
on p.PersonId=a.PersonId
;