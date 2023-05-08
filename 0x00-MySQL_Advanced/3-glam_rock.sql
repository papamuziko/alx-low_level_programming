-- List of bands with Glam as their main style, ranked by their longevity
SELECT
	band_name,
	(IFNULL(split, YEAR(CURDATE())) - formed) AS lifespan
FROM
	metal_bands
WHERE
	style LIKE BINARY '%Glam rock%'
ORDER BY
	2 DESC;
