% This function converts Rectangular to Polar form
% [RECT]=RECT2POL(RHO, THETA)
% RECT= Complex matrix or number
% RECT = A + jB; where: A-->Real, B-->Imaginary
% RHO= magnitude
% THETA = angle(rad)

function rect =pol2rect(rho, theta)
rect =rho.*cos(theta)+j*rho.*sin(theta);