package concrete;

import Linux.LinuxGuiFac;
import Windows.WindowsGuiFac;
import abst.GuiFac;
import macOS.macOSGuiFac;

public class FactoryInstance {
    public static GuiFac getGuiFac(String OS)
    {
        switch (OS)
        {
            case "macOS":
                return new macOSGuiFac();
            case "Windows":
                return new WindowsGuiFac();
        }
        return new LinuxGuiFac();
    }
}
