import http.client

conn = http.client.HTTPConnection("www.yahoo.co.jp")
conn.request("GET", "/")
res = conn.getresponse()

#print(response.status, response.reason)
print(res.status, res.reason)
print(res.readall().decode("UTF-8"))
conn.close()
