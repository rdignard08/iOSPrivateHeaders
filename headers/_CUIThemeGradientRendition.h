
@interface _CUIThemeGradientRendition : CUIThemeRendition {

    CUIThemeGradient gradient;
    double gradientAngle;
}
 + (id) _nodesFromNodeList:(^{_csigradientdatanode=Ifdddddddd})acount:(unsigned long long)bheader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})c;
 + ({__CUIThemeGradientRenditionInitializerStruct=Id@}) _parseGradientInfoFromCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;

 - (void) dealloc;
 - (unsigned int) gradientStyle;
 - (id) gradient;
 - (double) gradientDrawingAngle;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(long long)c;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;


@end
