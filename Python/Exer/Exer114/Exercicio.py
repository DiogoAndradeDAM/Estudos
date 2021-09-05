import urllib
import urllib.request

try:
    site = urllib.request.urlopen("http://pudim.com.br/")
except urllib.error.URLError:
    print("Deu errado, não está acessivel no momento")
else:
    print("Deu certo, você pode acessar o site pudim")
    print(site.read())