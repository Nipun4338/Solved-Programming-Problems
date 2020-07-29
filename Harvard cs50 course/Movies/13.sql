SELECT DISTINCT people.name FROM people WHERE people.name != "Kevin Bacon" AND
people.id IN (SELECT stars.person_id FROM stars
INNER JOIN movies ON movies.id = stars.movie_id WHERE
movies.id IN (SELECT movies.id FROM movies
INNER JOIN stars ON stars.movie_id = movies.id
INNER JOIN people ON people.id = stars.person_id WHERE people.name = "Kevin Bacon"
AND people.birth = 1958));
