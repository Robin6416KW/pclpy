
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/stl.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

using namespace pcl;


#include <pcl/io/file_grabber.h>



template <typename PointT>
void defineIoFileGrabber(py::module &m, std::string const & suffix) {
    using Class = FileGrabber<PointT>;
    py::class_<Class, boost::shared_ptr<Class>> cls(m, suffix.c_str());
    // Operators not implemented (operator[]);
    cls.def("size", &Class::size);
    cls.def("at", &Class::at);
        
}

void defineIoFileGrabberClasses(py::module &sub_module) {
}