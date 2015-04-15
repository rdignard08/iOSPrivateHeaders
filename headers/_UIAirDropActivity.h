
@interface _UIAirDropActivity : UIActivity {

    SFAirDropActivityViewController* _airDropViewController;
    @? _airdropCompletion;
}

 - (id) activityType;
 - (void) dealloc;
 - ({CGSize=dd}) _thumbnailSize;
 - (void) performActivity;
 - (void) prepareWithActivityItems:(id)a ;
 - (id) airDropViewController;
 - (@?) airdropCompletion;
 - (void) setAirdropCompletion:(@?)a ;
 - (void) setAirDropViewController:(id)a ;


@end
