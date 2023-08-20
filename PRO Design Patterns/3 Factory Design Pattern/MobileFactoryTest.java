// Author : Prathamesh Patil
// Factory Design Pattern

interface Mobile{
    void turnOn();
}

class WindowsMobile implements Mobile{
    public void turnOn(){
        System.out.println("<<< WINDOWS >>>");
    }
}

class IOSMobile implements Mobile{
    public void turnOn(){
        System.out.println("<<< IOS >>>");
    }
}
class AndroidMobile implements Mobile{
    public void turnOn(){
        System.out.println("<<< ANDROID >>>");
    }
}

class MobileFactory{
    static Mobile createMobile(String os){
        Mobile mobile;
        if(os == "android"){
            mobile = new AndroidMobile(); 
        }
        else if(os ==  "ios"){
            mobile = new IOSMobile();
        }
        else{
            mobile = new WindowsMobile();
        }
        return mobile;
    }
}

class MobileFactoryTest{
    public static void main(String[] args) {
        Mobile mobile1 = MobileFactory.createMobile("android");
        mobile1.turnOn();
        Mobile mobile2 = MobileFactory.createMobile("ios");
        mobile2.turnOn();
        Mobile mobile3 = MobileFactory.createMobile("windows");
        mobile3.turnOn();
    }
}