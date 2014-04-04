//
//  MapTutorialViewController.h
//  MapTutorial
//
//  Created by Todd Claussen on 4/2/14.
//  Copyright (c) 2014 Todd Claussen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@interface MapTutorialViewController : UIViewController
<MKMapViewDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)zoomin:(id)sender;

- (IBAction)changeMapType:(id)sender;

@end
