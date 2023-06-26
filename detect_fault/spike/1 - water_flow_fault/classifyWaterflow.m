function label = classifyWaterflow(value) %#codegen
% Classifica valores em normais ou erros
modelo = loadLearnerForCoder('waterflowSVM');
label = predict(modelo,value);
end