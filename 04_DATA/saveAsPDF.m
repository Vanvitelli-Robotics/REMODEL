function saveAsPDF(filename, b_cut)

if nargin < 2
    b_cut = true;
end

f = gcf;
set(f,'Units','Inches');
pos = get(f,'Position');
set(f,'PaperPositionMode','Auto','PaperUnits','Inches','PaperSize',[pos(3), pos(4)])
print(f,filename,'-dpdf','-r300','-painters')

if b_cut
    eval([ '!pdfcrop ' filename '.pdf ' filename '.pdf' ]);
end

end

