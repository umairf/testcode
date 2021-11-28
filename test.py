import sys
import numpy as np
import random
from sklearn.decomposition import PCA
import os
from os import listdir
from sklearn.preprocessing import MinMaxScaler
from keras.models import Sequential
from keras.layers import Input,LSTM, Dense, Flatten, GRU, Conv1D,MaxPooling1D, SimpleRNN, Dropout, BatchNormalization
from keras.models import load_model
import tensorflow as tf
from tensorflow.keras import activations
from sklearn.metrics import mean_squared_error
from sklearn.preprocessing import PolynomialFeatures
from sklearn.neural_network import MLPRegressor
from sklearn.metrics import accuracy_score
from sklearn.preprocessing import QuantileTransformer
from sklearn.tree import DecisionTreeRegressor
from sklearn.multiclass import OneVsOneClassifier
from keras.models import model_from_json
from sklearn.svm import LinearSVC
from sklearn.metrics import confusion_matrix
from sklearn.metrics import mean_squared_error
import keras.backend as K


sys.path.append('/root/data1/testcode')
x=10
x= x+1
print (sys.version)

print("Hello world ", x)
print("\n")
