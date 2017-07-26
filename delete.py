import psycopg2

idnum = "4"

sql = """delete from contacts where id = (%s)"""
conn = None
try:
    params = {
        "user": 'postgres',
        "password": 'Bacano',
        "host": 'localhost',
        "database": 'practice',
        }
    conn = psycopg2.connect(**params)
    print ("connected!")
    cur = conn.cursor()
    cur.execute(sql, [idnum])
    conn.commit()
    cur.close()
    print ("all done!")
    

except (Exception, psycopg2.DatabaseError) as error:
    print (error)
finally:
    if conn is not None:
        conn.close()
