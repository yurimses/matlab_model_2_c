load fisheriris
inds = ~strcmp(species,'setosa');
X = meas(inds,:);
Y = species(inds);

Mdl = fitcsvm(X,Y);

saveLearnerForCoder(Mdl,'SVMIris');

type classifyIris.m

codegen classifyIris -args {X}

label1 = predict(Mdl,X);
label2 = classifyIris(X);
label3 = classifyIris_mex(X);
verify_label = isequal(label1,label2,label3);

