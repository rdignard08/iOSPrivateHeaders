
@interface CUIThemeSchemaRendition : CUIThemeRendition {

    @"NSDictionary" cuiInfo;
    Q _nimages;
    [9^{CGImage}] _image;
    [9{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}] _layoutRects;
    {CGSize="width"d"height"d} _intrinsicSize;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _elementRect;
    q _columnSlices;
    q _rowSlices;
    {?="top"d"left"d"bottom"d"right"d} _contentInsets;
    @"CUIPSDGradient" _gradient;
}

 - (d) scale;
 - (S) size;
 - (id) description;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (id) slices;
 - (S) state;
 - (S) value;
 - (S) identifier;
 - (id) gradient;
 - (Q) numberOfSlices;
 - (id) initWithCoreUIOptions:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (id) referenceImage;
 - (S) dimension1;
 - (S) presentationState;
 - (S) dimension2;
 - (S) drawingLayer;
 - (S) keyScale;
 - (id) stringForState:(S)a;
 - (S) previousState;
 - (S) direction;
 - (id) stringForValue:(S)a;
 - (S) previousValue;
 - (S) look;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) sliceRects;
 - (id) initWithCoreUIOptions:(id)aforKey:(r^{_renditionkeytoken=SS})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) alignmentRectangle;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) edgeInsets:(BOOL)a;
 - ({?=dddd}) contentInsets;
 - (id) coreUIOptions;
 - (id) defaultTemplateName;
 - (q) columnSlices;
 - (q) rowSlices;
 - ({CGPoint=dd}) renditionCoordinatesForPartFeatures:(q)a;
 - (id) typeLocalizedString;
 - (id) stateLocalizedString;
 - (id) previousStateLocalizedString;
 - (id) directionLocalizedString;
 - (id) valueLocalizedString;
 - (id) previousValueLocalizedString;
 - (id) sizeLocalizedString;
 - (id) presentationStateLocalizedString;
 - (id) dimension1LocalizedString;
 - (id) dimension2LocalizedString;
 - (id) drawingLayerLocalizedString;
 - (id) lookLocalizedString;
 - (id) scaleLocalizedString;
 - (S) layer;


@end
