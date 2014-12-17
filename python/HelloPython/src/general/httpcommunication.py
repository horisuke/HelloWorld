import httplib
from httplib2 import Response

conn = httplib.HTTPConnection("www.yahoo.co.jp")
conn.request("GET", "/")
res = conn.getresponse()

print(Response.status, Response.reason)
print(res.read().decode("UTF-8"))
conn.close()

