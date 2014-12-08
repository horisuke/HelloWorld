#python2.7
#import urllib
#
#proxies = {'http': 'http://proxy.server:port'}
#url = 'http://www.yahoo.co.jp'
#filehandle = urllib.urlopen(url, proxies=proxies)
#data = filehandle.read()
#print(data)

#python3.4
import urllib.request
proxies = 'proxy.co.jp:port'
url = 'http://www.yahoo.co.jp'
request = urllib.request.Request(url)
request.set_proxy(proxies, 'http')
response = urllib.request.urlopen(request)
print(response.read().decode('utf-8'))

#python3.4end
