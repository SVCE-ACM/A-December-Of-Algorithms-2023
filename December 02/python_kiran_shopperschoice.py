# -*- coding: utf-8 -*-
"""python_kiran_shopperschoice.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1BsofeH2TD6fsWw1GSaYJ38RLUo_ZWsuQ
"""

string_list=input("Enter the product Ids customer bought separated by spaces:")
id_list=string_list.split()
for i in range(len(id_list)):
  id_list[i]=int(id_list[i])
frequency={}
for itemid in id_list:
  if itemid in frequency:
    frequency[itemid]+=1
  else:
    frequency[itemid]=1

print(frequency)