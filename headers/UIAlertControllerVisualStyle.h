
@interface UIAlertControllerVisualStyle : NSObject {

    @"UIAlertControllerDescriptor" _descriptor;
    @"UITraitCollection" _traitCollection;
}
@property (nonatomic, retain, readwrite) UIAlertControllerDescriptor* descriptor;
@property (nonatomic, retain, readwrite) UITraitCollection* traitCollection;

 - (id) traitCollection;
 - (void) setTraitCollection:(id)a;
 - (d) maximumWidth;
 - (id) backgroundView;
 - (id) dimmingView;
 - (void) setDescriptor:(id)a;
 - (d) verticalContentMargin;
 - (id) titleLabelFont;
 - (id) titleLabelColor;
 - (d) marginAboveTitleLabelFirstBaseline;
 - (d) marginBelowLastLabelLastBaseline;
 - (q) maximumNumberOfLinesInTitleLabel;
 - (id) messageLabelFont;
 - (id) messageLabelColor;
 - (q) maximumNumberOfLinesInMessageLabel;
 - (d) horizontalContentMargin;
 - (d) visualAltitude;
 - (id) regularActionFont;
 - (id) defaultActionFont;
 - (id) actionHighlightedBackgroundView;
 - (id) highlightedActionContentColor;
 - (id) defaultActionBackgroundColorWhenSeparate;
 - (d) minimumActionHeight;
 - (id) disabledActionContentColor;
 - (BOOL) focusedActionAnimatesOnPresentationAndDismissal;
 - ({CGAffineTransform=dddddd}) presentationAnimationStartTransform;
 - (d) sectionDelimitingSeparatorDimension;
 - (BOOL) hideActionSeparators;
 - (d) marginBelowTitleLabelLastBaseline;
 - (d) marginAboveMessageLabelFirstBaseline;
 - (d) marginBelowMessageLabelLastBaseline;
 - (id) _detailMessageFont;
 - (d) actionWidthForMinimumActionWidth:(d)a;
 - (d) backgroundCornerRadius;
 - ({CGSize=dd}) collectionViewOutsetSize;
 - (d) _scaledMarginAboveTitleLabelFirstBaseline;
 - (d) _scaledMarginBelowTitleLabelLastBaseline;
 - (d) _scaledMarginAboveMessageLabelFirstBaseline;
 - (d) _scaledMarginBelowMessageLabelLastBaseline;
 - (d) _scaledMarginBelowLastLabelLastBaseline;
 - (id) descriptor;


@end
