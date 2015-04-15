
@interface CATextLayer : CALayer {

    ^{CATextLayerPrivate=} _state;
}
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) needsDisplayForKey:(id)a;

 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a;
 - (void) didChangeValueForKey:(id)a;
 - (void) setFont:(^v)a;
 - (void) setFontSize:(double)a;
 - (void) setForegroundColor:(^{CGColor=})a;
 - (void) setAlignmentMode:(id)a;
 - (id) init;
 - (id) initWithLayer:(id)a;
 - (^{CGColor=}) foregroundColor;
 - (id) implicitAnimationForKeyPath:(id)a;
 - (void) _prepareContext:(^{CGContext=})a;
 - (void) drawInContext:(^{CGContext=})a;
 - ({CGSize=dd}) _preferredSize;
 - (BOOL) allowsFontSubpixelQuantization;
 - (void) _drawLine:(^{__CTLine=})ainContext:(^{CGContext=})batPoint:({CGPoint=dd})c;
 - (BOOL) isWrapped;
 - (^v) font;
 - (double) fontSize;
 - (id) _createStringDict;
 - (id) truncationString;
 - (^{__CTTypesetter=}) _retainTypesetter;
 - (id) alignmentMode;
 - (id) truncationMode;
 - (^{__CTLine=}) _createTruncationToken;
 - (void) _applyLinesToFunction:(^?)ainfo:(^v)b;
 - (void) setWrapped:(BOOL)a;
 - (void) setTruncationMode:(id)a;
 - (BOOL) wrapped;
 - (void) setTruncationString:(id)a;
 - (void) setAllowsFontSubpixelQuantization:(BOOL)a;


@end
