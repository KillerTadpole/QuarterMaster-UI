import psycopg2

first = "chuck
last = "Berry"
number = "123"

sql = """INSERT INTO contacts
             VALUES(%s);"""
conn = None
try:
    params = {
        "user": 'postgres',
        "password": 'Bacano',
        "host": 'localhost',
        "database": 'practice',
        }
    conn = psycopg2.connect(dbname="practice", user="postgres", password="Bacano", host="localhost", port="5432")
    cur = conn.cursor()
    print ("conected1")
    cur.execute ("select * from contacts")
    records = cur.fetchall()
    print (records)
    
    cur.execute("insert into contacts (firstName) values (%s)", [first])
    conn.commit()
    
    print ("After inserting Chuck Barry ..........................")
    cur = conn.cursor()
    cur.execute ("select * from contacts")
    records = cur.fetchall()
    print (records)
    cur.close()

except (Exception, psycopg2.DatabaseError) as error:
    print(error)
finally:
    if conn is not None:
        conn.close()


