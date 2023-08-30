# SELECT score, 
#        DENSE_RANK() OVER(ORDER BY score DESC) AS `rank`
# FROM Scores
# ORDER BY score DESC;

SELECT score,
       (SELECT COUNT(DISTINCT score)
        FROM Scores
        WHERE score >= s.score) AS `rank`
FROM Scores s
ORDER BY score DESC;

