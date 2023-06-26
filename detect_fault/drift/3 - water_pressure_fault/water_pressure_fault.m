%% SVM PARA WATERFLOW

%clc;

%% PREPARAR O DATASET

% LER E SALVAR
water_pressure_drift = readtable('water_pressure_drift5_4.csv');

%% DADOS

total_valores = sprintf("Total de valores = %d", height(water_pressure_drift));
disp(total_valores);

%% DIVISÃO PARA TREINAMENTO E TESTE (SEQUENCIAL 70/30)

% Percentagem de treino
perc_treino = round(0.7*(height(water_pressure_drift)));

% Atribuindo features (x) e saídas (y)
x = water_pressure_drift(: , 2);
y = water_pressure_drift(: , 3);

% Treino (70%)
x_treino = x(1:perc_treino, :);
y_treino = y(1:perc_treino, :);

% Teste (30%)
x_teste = x(perc_treino + 1:end, :);
y_teste = y(perc_treino + 1:end, :);

%% HOLDOUT COM CVPARTITION (70/30)

% % Seed (habilitar para padrão)
% rng('default');
% 
% % Partição com 30% como teste
% cv = cvpartition(size(water_pressure_drift,1),'Holdout',0.3); 
% 
% % Extrai índices do teste 
% idx = cv.test;
% 
% % Usa índices para partição
% dadosTreino = water_pressure_drift(~idx,:);
% dadosTeste = water_pressure_drift(idx,:);
% 
% % Atribuindo treino às variáveis (70%)
% x_treino = dadosTreino(:, 2);
% y_treino = dadosTreino(:, 3);
% 
% % Atribuindo teste às variáveis (30%)
% x_teste = dadosTeste(:, 2);
% y_teste = dadosTeste(:, 3);

%% MODELO

modelo = fitcsvm(x_treino, y_treino, 'KernelFunction','linear');
%modelo = fitcsvm(x_treino, y_treino, 'KernelFunction','rbf');

%% TESTE

resultado = predict(modelo, x_teste);

% Acurácia
var1 = sum(resultado == y_teste.drift);
var2 = height(y_teste)*100;
acuracia = sum(resultado == y_teste.drift)/height(y_teste)*100;
sp = sprintf("Acurácia do Teste = %f", acuracia);
disp(sp);

labelteste = predict(modelo, 10000);
res_unico = unique(resultado);
disp("dados");
disp(res_unico);