select e.name,b.bonus from
Employee as e left join bonus as b 
on e.empid= b.empid where 
bonus < 1000 or bonus is NULL;