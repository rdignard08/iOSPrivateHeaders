
@interface _CUIPDFRendition : CUIThemeRendition {

    ^{CGPDFDocument=} _pdfDocument;
}

 - (void) dealloc;
 - (id) initWithCSIData:(id)a forKey:(r^{_renditionkeytoken=SS})b artworkStatus:(long long)c ;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;
 - (^{CGPDFDocument=}) pdfDocument;


@end
