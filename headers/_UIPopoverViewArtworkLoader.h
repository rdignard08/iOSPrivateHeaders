
@interface _UIPopoverViewArtworkLoader : NSObject {

    q _backgroundStyle;
    @"NSString" _backgroundSelector;
}
 + (id) backgroundSelectorForBackgroundStyle:(q)a;

 - (void) dealloc;
 - (d) arrowHeight;
 - (id) initWithBackgroundStyle:(q)a;
 - (id) topArrowLeftEndCapView;
 - (id) topArrowPinnedView;
 - (id) topArrowView;
 - (id) topArrowRightEndCapView;
 - (id) bottomArrowLeftEndCapView;
 - (id) bottomArrowPinnedView;
 - (id) bottomArrowView;
 - (id) bottomArrowRightEndCapView;
 - (id) shortRightArrowView;
 - (id) rightArrowPinnedTopView;
 - (id) rightArrowBottomEndCapView;
 - (id) rightArrowPinnedBottomView;
 - (id) rightArrowTopEndCapView;
 - (id) rightArrowView;
 - (d) arrowBase;
 - (id) templateImageForDirection:(id)ashortArtwork:(BOOL)b;
 - (BOOL) modern;
 - (d) topArrowStart;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentRectForRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainImageOfSize:({CGSize=dd})b;
 - (d) arrowTopGradientEnd;
 - (d) capCornerRadius;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentsCenterForRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainImageOfSize:({CGSize=dd})b;
 - (id) viewWithContentsImage:(id)arect:({CGRect={CGPoint=dd}{CGSize=dd}})bcenter:({CGRect={CGPoint=dd}{CGSize=dd}})cantialiasingMask:(I)ddirectionSelector:(id)e;
 - (d) clampArrowBase;
 - (d) sideArrowStart;
 - (d) noArrowTopGradientEnd;
 - (d) bottomEndCapHeight;
 - (d) shortArtArrowTopGradientEnd;
 - (id) shortTopArrowLeftEndCapView;
 - (d) shortArtRightArrowBase;
 - (d) shortArtNoArrowTopGradientEnd;
 - (id) shortBottomArrowLeftEndCapView;
 - (id) shortTopArrowView;
 - (id) shortTopArrowPinnedView;
 - (id) shortTopArrowRightEndCapView;
 - (id) shortBottomArrowView;
 - (id) shortBottomArrowPinnedView;
 - (id) shortBottomArrowRightEndCapView;


@end
