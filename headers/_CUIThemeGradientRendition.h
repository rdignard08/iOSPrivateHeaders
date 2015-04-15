
@interface _CUIThemeGradientRendition : CUIThemeRendition {

    @"CUIThemeGradient" gradient;
    d gradientAngle;
}
 + (id) _nodesFromNodeList:(^{_csigradientdatanode=Ifdddddddd})acount:(Q)bheader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})c;
 + ({__CUIThemeGradientRenditionInitializerStruct=Id@}) _parseGradientInfoFromCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;

 - (void) dealloc;
 - (I) gradientStyle;
 - (id) gradient;
 - (d) gradientDrawingAngle;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;


@end
