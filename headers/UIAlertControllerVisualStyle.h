
@interface UIAlertControllerVisualStyle : NSObject {

    @"UIAlertControllerDescriptor" _descriptor;
    @"UITraitCollection" _traitCollection;
}
@property (nonatomic, retain, readwrite) UIAlertControllerDescriptor* descriptor;
@property (nonatomic, retain, readwrite) UITraitCollection* traitCollection;

 - (id) traitCollection;
 - (void) setTraitCollection:(id)a;
 - (double) maximumWidth;
 - (id) backgroundView;
 - (id) dimmingView;
 - (void) setDescriptor:(id)a;
 - (double) verticalContentMargin;
 - (id) titleLabelFont;
 - (id) titleLabelColor;
 - (double) marginAboveTitleLabelFirstBaseline;
 - (double) marginBelowLastLabelLastBaseline;
 - (long long) maximumNumberOfLinesInTitleLabel;
 - (id) messageLabelFont;
 - (id) messageLabelColor;
 - (long long) maximumNumberOfLinesInMessageLabel;
 - (double) horizontalContentMargin;
 - (double) visualAltitude;
 - (id) regularActionFont;
 - (id) defaultActionFont;
 - (id) actionHighlightedBackgroundView;
 - (id) highlightedActionContentColor;
 - (id) defaultActionBackgroundColorWhenSeparate;
 - (double) minimumActionHeight;
 - (id) disabledActionContentColor;
 - (BOOL) focusedActionAnimatesOnPresentationAndDismissal;
 - ({CGAffineTransform=dddddd}) presentationAnimationStartTransform;
 - (double) sectionDelimitingSeparatorDimension;
 - (BOOL) hideActionSeparators;
 - (double) marginBelowTitleLabelLastBaseline;
 - (double) marginAboveMessageLabelFirstBaseline;
 - (double) marginBelowMessageLabelLastBaseline;
 - (id) _detailMessageFont;
 - (double) actionWidthForMinimumActionWidth:(double)a;
 - (double) backgroundCornerRadius;
 - ({CGSize=dd}) collectionViewOutsetSize;
 - (double) _scaledMarginAboveTitleLabelFirstBaseline;
 - (double) _scaledMarginBelowTitleLabelLastBaseline;
 - (double) _scaledMarginAboveMessageLabelFirstBaseline;
 - (double) _scaledMarginBelowMessageLabelLastBaseline;
 - (double) _scaledMarginBelowLastLabelLastBaseline;
 - (id) descriptor;


@end
