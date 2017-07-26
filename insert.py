import psycopg2

colume =  "firstName"

element = "Chuck"

sqlCommand = """insert into contacts (firstName) values (%s)"""

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
    cur.execute(sqlCommand, [element])
    conn.commit()
    cur.close()

except (Exception, psycopg2.DatabaseError) as error:
    print(error)
finally:
    if conn is not None:
        conn.close()
