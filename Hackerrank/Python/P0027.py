#https://www.hackerrank.com/challenges/xml-1-find-the-score/problem
"""
6
<feed xml:lang='en'>
    <title>HackerRank</title>
    <subtitle lang='en'>Programming challenges</subtitle>
    <link rel='alternate' type='text/html' href='http://hackerrank.com/'/>
    <updated>2013-12-25T12:00:00</updated>
</feed>
"""
import sys
import xml.etree.ElementTree as etree

def get_attr_number(node):
       return sum(map(get_attr_number, node)) + len(node.attrib)

if __name__ == '__main__':
    sys.stdin.readline()
    xml = sys.stdin.read()
    tree = etree.ElementTree(etree.fromstring(xml))
    root = tree.getroot()
    print get_attr_number(root)
