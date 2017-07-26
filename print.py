import psycopg2

conn = None
try:
    params = {
        "user": 'postgres',
        "password": 'Bacano',
        "host": 'localhost',
        "database": 'practice',
        }
    conn = psycopg2.connect(**params)
    cur = conn.cursor()
    print ("connected!")
    cur.execute ("select * from contacts")
    records = cur.fetchall()
    print (records)
    cur.close()

except (Exception, psycopg2.DatabaseError) as error:
    print(error)
finally:
    if conn is not None:
        conn.close()
