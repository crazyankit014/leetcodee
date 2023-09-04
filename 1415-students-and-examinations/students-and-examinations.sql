# Write your MySQL query statement below
# select s.student_id,s.student_name,b.Subject_name,Examinations.student_id,count(student_id) as 
#  attended_exams from students as s right join  subjects as b on s.student_id= e.student_id order by s.student_id;


select s.student_id, student_name, su.subject_name, count(e.subject_name) as attended_exams from Students s join Subjects su left join Examinations e on s.student_id = e.student_id and su.subject_name = e.subject_name group by s.student_id, su.subject_name order by s.student_id, su.subject_name;
