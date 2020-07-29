SELECT movies.title FROM movies
INNER JOIN stars ON stars.movie_id = movies.id
INNER JOIN people ON people.id = stars.person_id WHERE people.name = "Johnny Depp"
AND movies.id IN (SELECT stars.movie_id FROM stars
JOIN people ON people.id = stars.person_id WHERE people.name = "Helena Bonham Carter");


